#import "API/tuankhang.h" <br>
#Edit TWEAK_NAME and remove @@ <br>
@@TWEAK_NAME@@_LDFLAGS += API/tuankhang.a
# Đối Với Menu ImGui
void function(){ <br>
[tuankhangmods setToken:@"Dán Token Vào Đây"]; <br>
tuankhangmods *API = [[tuankhangmods alloc] init]; <br>
[API paid:^{ <br>
//load menu  <br>
loadview(); //etc <br>
menuSetup(); <br>
}]; <br>
}
