#import "API/tuankhang.h" <br>
#Edit TWEAK_NAME and remove @@ <br>
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
