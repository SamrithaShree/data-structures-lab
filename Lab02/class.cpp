//program to calculate areas of 2D/3D shapes
#include<stdio.h>

class ShapeCalculator{
    private:
    float length,breadth,height;

    public:
    
    ShapeCalculator(){
        length=0.0;
        breadth=0.0;
        height=0.0;
    }

    // Get length input from user
    void getLength(){
        printf("Enter the length: \n");
        scanf("%f",&length);
    }

    // Get breadth input from user
    void getBreadth(){
        printf("Enter the breadth: \n");
        scanf("%f",&breadth);
    }

    // Get height input from user
    void getHeight(){
        printf("Enter the height: \n");
        scanf("%f",&height);
    }

    // Calculate and display area of a square
    void SquareArea(){
        getLength();
        printf("The area of the square is %.2f\n",length*length);
    }

    // Calculate and display surface area of a cube
    void CubeArea(){
        getLength();
        printf("The area of the cube is %.2f\n",6*length*length);
    }

    // Calculate and display area of a rectangle
    void rectangleArea(){
       getLength();
       getBreadth();
       printf("The area of the rectangle is %.2f\n",length*breadth);
    }

    // Calculate and display surface area of a cuboid
    void CuboidArea(){
        getLength();
        getBreadth();
        getHeight();
        printf("The area of the cuboid is %.2f\n",((length*breadth)+(breadth*height)+(height*length)));
    }

};
int main(){
    ShapeCalculator Calc;
    int option;

    while(1){
        printf("Menu:\n");
        printf("1.Square\n");
        printf("2.Cube\n");
        printf("3.Rectangle\n");
        printf("4.Cuboid\n");
        printf("5.Exit\n");

        scanf("%d",&option);
        switch(option){
            case 1:
            Calc.SquareArea();
            break;

            case 2:
            Calc.CubeArea();
            break;

            case 3:
            Calc.rectangleArea();
            break;

            case 4:
            Calc.CuboidArea();
            break;

            case 5:
            return 0;
        }

    }
    return 0;
}
