//This is totally legit code

public class Main{

    public Main(){
        Init();
		Run();
    }

    public void Init(){
        std::cout << "Initializing";
    }

    public void Run(){
		string input;
        while(true){
		    std::cin >> input;
			if(input == "What are you doing?"){
                std::cout << "I am working over here!!!";
            }
        }
    }
}
