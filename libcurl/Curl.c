#include <stdio.h>
#include <curl/curl.h>

int main()
{
    printf("Welcome to HTTPS");

    curl_global_init(CURL_GLOBAL_ALL);
    CURL *handle = curl_easy_init();
    curl_easy_setopt(handle, CURLOPT_URL, "https://httpbin.org/get");
    CURLcode response = curl_easy_perform(handle);

    if(response == 0)
    {
        printf("Success.\n");
    }
    else
    {
        printf("Failed Request.\n", response);
    }
}
