import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.URL;

public class SimpleWebCrawler {

    static class CrawlerThread extends Thread {
        private String url;

        public CrawlerThread(String url) {
            this.url = url;
        }

        public void run() {
            try {
                System.out.println("Crawling: " + url);
                URL site = new URL(url);
                BufferedReader in = new BufferedReader(new InputStreamReader(site.openStream()));

                String line;
                int count = 0;
                while ((line = in.readLine()) != null && count < 5) {
                    System.out.println("[" + url + "] " + line);
                    count++;
                }
                in.close();
                System.out.println("Done: " + url);
            } catch (Exception e) {
                System.out.println("Failed to crawl " + url + ": " + e.getMessage());
            }
        }
    }

    public static void main(String[] args) {
        String[] urls = {
            "http://example.com",
            "http://www.google.com",
            "http://www.wikipedia.org"
        };

        for (String url : urls) {
            new CrawlerThread(url).start();
        }
    }
}