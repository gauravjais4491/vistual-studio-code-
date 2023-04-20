import requests
import random
import json
import time



url1 = "https://rha.ole.redhat.com/rha/api/courses/rh124-8.0/pages/ch06s03?lang=en-U"

session_id = 'sessionid_prod=88kmxfjc1u0g0hqgfkki3kv9enfnjizc' #replace with your session cookie

header = {'User-Agent':'Mozilla/5.0 (X11; Linux x86_64; rv:87.0) Gecko/20100101 Firefox/87.0','Cookie':session_id}

response = requests.get(url1,headers=header)

x = json.loads(response.content)

next_page = x["data"]["attributes"]["next_tag"]   #Get next chapter name

while True:
    header2 = {
    'User-Agent':'Mozilla/5.0 (X11; Linux x86_64; rv:87.0) Gecko/20100101 Firefox/87.0',
    'Origin': 'https://rha.ole.redhat.com',
    'Content-Type': 'application/json;charset=utf-8',
    'X-Csrftoken': 'pyPD4SryCdXzIDznYJoWN1DF4M9ou0iq', #change your csrf token
    'Referer': 'https://rha.ole.redhat.com/rha/app/courses/rh124-8.0/pages/'+next_page,
    'Cookie':'csrftoken=pyPD4SryCdXzIDznYJoWN1DF4M9ou0iq;sessionid_prod=88kmxfjc1u0g0hqgfkki3kv9enfnjizc' #change your csrf token and cookie
    }

    url1 = "https://rha.ole.redhat.com/rha/api/courses/rh124-8.0/pages/"+next_page+"?lang=en-U"  #Get next chapter Details

    response = requests.get(url1,headers=header)

    x = json.loads(response.content)
    next_page = x["data"]["attributes"]["next_tag"]

    url3 = "https://rha.ole.redhat.com/rha/sapi/rest/user_data/c138c89a-0917-4f48-b329-b080e96ecbe5"

    response3 = requests.patch(url3,json={"last_view":next_page},headers=header2)
    print(f"Chapter {next_page} has been Completed!")
    time.sleep(random.randint(1,10)) #rate limit to make genuine user