//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
    void heal();
    monster(string = "Lewis", int = 50,int = 25);
    ~monster();
};

monster::~monster(){
    cout<<"Bye bye "<< name << " hp: "<<hp <<endl;
}

monster::monster(string n,int h ,int p){
    name=n;
    h>100?hp=100:hp=h;
    p>50?potion=50:potion=p;

    cout<<"monster "<<name<<" zzzzzzzzz"<<endl;
}

//monster::Attack()

#endif /* monster_h */
