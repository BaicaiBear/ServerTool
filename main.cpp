#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
 cout<<"*******欢迎使用小熊白菜的服务器管理系统*******"<<endl;
 int i;
 i = 0;
 while(i==0){  
  char a;
  cout<<"1-------启动服务器"<<endl<<"2-------清除用户数据(players)"<<endl<<"3-------清除地图信息(worlds)"<<endl<<"4-------清除核心"<<endl<<"5-------升级核心"<<endl<<"6-------以崩溃重启的方法启动服务器“<<endl<<"0-------退出程序"<<endl<<"请输入选择：";
  cin>>a;
  if(a=='1'){
    system("java -jar nukkit*.jar");
  }
  else if(a=='2'){
    system("rm -rf players");
  }
  else if(a=='3'){
    system("rm -rf worlds");
  }
  else if(a=='4'){
    system("rm *.jar");
    system("yes");
  }
  else if(a=='5'){
    system("./*updata.sh");
  }
  else if(a=='6'){
   int r=1;
   while(r==1){
    system("java -jar nukkit*.jar")
   }
  }
  else if(a=='0'){
    break;
  }
  else{
    cout<<"您的输入有误，请重新输入"<<endl;  }
 }
  return 0;
}  
