//This is totally legit code

public class Main{

    public Main(){
        Init();
		Run();
    }

    public void Init(){
        std::cout << "Initializing";
		Ssh();
    }

    public void Run(){
        while(true){
             std::cout << "I am working over here!!!";
        }
    }
	
	public void Ssh(){
		Connect(privatekey.txt); //this is geen correcte syntax
	}
}
