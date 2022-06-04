#include<iostream>
namespace structure
{
	struct Connection;
	class Node
	{
		public:
			Node *out[9999];
			Connection *father;
			int i,ypos,xend,xstart; 
			Node(Connection *fat)
			{
				this->father=fat;
				this->i=0;
				xend=0;
				xstart=-1;
			}
			Node()
			{
				this->father=NULL;
				this->i=0;
				ypos=-1;
				xend=0;
				xstart=0;
			}
			void connect(Node* cnct_to)
			{
				this->out[i]=cnct_to;//ANDs[0].in[0]
				this->i=this->i+1;
				return;
			}
			void setYPos(int y)
			{
				ypos=y;
			}
			void setXPos(int x)
			{
				xstart=x;
			}
			void conW(int x)
			{
				xend=((x>xend)?x:xend);
			}
	};
	struct Connection
	{
		Node *in[2],*out;
		char typ;
		int xpos;
		Connection()
		{
			in[0]=new Node(this);
			in[1]=new Node(this);
			out=new Node(this);
			xpos=-1;
		}
		void setXPos(int x)
		{
			xpos=x;
		}
	};
}