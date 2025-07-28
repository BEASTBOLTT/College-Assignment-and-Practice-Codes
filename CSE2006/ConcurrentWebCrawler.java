import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Arrays;
import java.util.List;
import java.util.concurrent.*;

class WebCrawlerTask implements Callable<String> {
    private String url;

    public WebCrawlerTask(String url) {
        this.url = url;
    }

    @Override
    public String call() {
        try {
            HttpURLConnection connection = (HttpURLConnection) new URL(url).openConnection();
            connection.setRequestMethod("GET");
            connection.setConnectTimeout(3000);
            connection.connect();
            int statusCode = connection.getResponseCode();
            return "URL: " + url + " | Status Code: " + statusCode;
        } catch (IOException e) {
            return "URL: " + url + " | Error: " + e.getMessage();
        }
    }
}

public class ConcurrentWebCrawler {
    public static void main(String[] args) {
        List<String> urls = Arrays.asList(
            "https://www.google.com",
            "https://www.wikipedia.org",
            "https://www.github.com",
            "https://www.stackoverflow.com",
            "https://www.reddit.com"
        );

        ExecutorService executor = Executors.newFixedThreadPool(5);
        List<Future<String>> results;

        try {
            results = executor.invokeAll(urls.stream().map(WebCrawlerTask::new).toList());
            for (Future<String> result : results) {
                try {
                    System.out.println(result.get());
                } catch (ExecutionException | InterruptedException e) {
                    e.printStackTrace();
                }
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        } finally {
            executor.shutdown();
        }
    }
}
