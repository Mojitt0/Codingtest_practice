import datetime

s_time = datetime.datetime.now()
e_time = datetime.datetime.now()

elapsed_time = e_time - s_time

ms_elpased_time = elapsed_time.microseconds / 1000

#sec_elapsed_time = elapsed_time.seconds