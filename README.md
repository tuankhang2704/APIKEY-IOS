#import "API/tuankhang.h"
#Edit TWEAK_NAME and remove @@
@@TWEAK_NAME@@_LDFLAGS += API/tuankhang.a
# Đối Với Menu ImGui
void function(){
[tuankhangmods setToken:@"Dán Token Vào Đây"];
tuankhangmods *API = [[tuankhangmods alloc] init];
[API paid:^{
//load menu 
loadview(); //etc
menuSetup();
}];
}
