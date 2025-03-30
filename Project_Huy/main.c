
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct 
{
	int value;
	void* previous_node;
}node_t;

typedef struct
{
	node_t* last_node;
	int len;
}linked_list_t;

//------------------------------------------------------------------------------
//1. Create: tạo ra đối tượng linked list
//- input : linked_list_t * -địa chỉ đối tượng linked_list được tạo
//- output : void
void Create_LL(linked_list_t* ll)
{
	ll->last_node = 0;
	ll->len = 0;
}



//------------------------------------------------------------------------------
//2. GetLen: lấy số lượng node trong linked lisst
//- input : linked_list_t * địa chỉ đối tượng linked_list cần GetLen
//- Output : int
int Getlen(linked_list_t* ll)
{
	int count = 0;
	node_t* temp = ll->last_node;// Trỏ đến node cuối
	while (temp != 0)
	{
		count++;
		temp = temp->previous_node;
	}
	return count;

		
}
//------------------------------------------------------------------------------

//3. Add: thêm một node vào cuối linked_list
//- Input :
//	*linked_list_t * -địa chỉ đối tượng linked list.Cái mà chúng ta sẽ add node vào đó
//	* int - giá trị của node được add vào
//	- Output : void
//	- Gợi ý : sử dụng cấp phát động(malloc hoặc calloc) để tạo ra node, và gán previous_node lưu địa chỉ của node trước.

void AddNodeToLinkList(linked_list_t* ll, int val)
{
	node_t* node = malloc(sizeof(node_t));
	//Khai báo con trỏ node có kiểu node_t* 
	// Cấp phát động 1 vùng nhớ có kích thước node_t, vì malloc trả về 1 void* nên phải gán con trỏ kiểu node_t*
	node->value = val;
	if (ll->len > 0)
	{
		node->previous_node = ll->last_node;
	}
	else
	{
		node->previous_node = 0;
	}
	ll->last_node = node;
	ll->len++;

}

//----------------------------------------------------------------------------------------------------------------------------
//4. Insert: chèn node vào lined list ở vị trí index
//- input :
//	*linked_list_t * địa của đối tượng linked lisst, mà ta sẽ insert đối tượng vào
//	* int value : giá trị của node.
//	* int index : vị trí node được insert vào.
//	- Output : void
//	- Gợi ý : giống như add chúng ta cũng cần cấp phát động, và chúng ta cần update lại previous_node của node trước nó
void Insert(linked_list_t* ll, int val, int index)
{
	if (index <0 || index > ll->len)
	{
		printf("Index ko hop le!\n");
		return;
	}
	
	// Cấp phát động cho node mới
	node_t* node_In = malloc(sizeof(node_t));
	node_In ->value = val;
	node_In ->previous_node = 0;
	
	if (ll->len == 0 || index == ll->len) {
		node_In->previous_node = ll->last_node;
		ll->last_node = node_In;
	}
	else
	{
		node_t* node_temp = ll->last_node;
		for (int i = ll->len - 1; i > index; i--)
		{

			node_temp = node_temp-> previous_node;


		}
		// Chèn node_In vào trước node_temp
		node_In->previous_node = node_temp->previous_node;
		node_temp->previous_node = node_In;
	}
	ll-> len++;
}

//----------------------------------------------------------------------------------------------------------------------------
//5. Remove: xoá một node ở vị trí cuối cùng trong linked list
//- input : linked_list_t * địa chỉ của đối tượng linked list, mà ta muốn xoá node ở trong nos
//- output : void
//- gợi ý : giải phóng vùng nhớ(sử dụng hàm free) của node cuối cùng.
void remove_last(linked_list_t* ll)
{


	node_t* temp = ll->last_node;// Lưu địa chỉ của node cuối cùng
	ll->last_node = temp->previous_node;// Cập nhật last_node thành node trước nó
	free(temp);
	ll->len--;
	


}
//----------------------------------------------------------------------------------------------------------------------------
//6. RemoveIndex: xoá một node ở vị trí index
//- Input :
//	*linked_list_t * : địa chỉ của linked_líst, mà ta muốn xoá node trong nos
//	* int index : vị trí của node muốn xoá
void remove_index(linked_list_t* ll, int index)
{
	node_t* node_temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--)
	{
		node_temp = node_temp->previous_node;
	}
	node_t* node_del = node_temp->previous_node; // Gán note cần xóa vào node trước node tạm
	node_temp->previous_node = node_del->previous_node;//gán lại giá trị node_previous của note tạm chính là node previous của note cần xóa
	free(node_del);
	ll->len--;

	
}

//------------------------------------------------------------------------------------------------------------------------------
//7. Search: tìm kiếm vị trí của node theo giá trị
//- Input :
//	*linked_list_t * : địa chỉ của linked líst mà chúng ta cần tìm kiếm
//	* int value : giá trị của node mà chúng ta muốn tìm kiếm
//	- Ouput : int : vị trí của node được tìm thấy, -1 nếu không tìm thấy bất kỳ node vào có giá trị value.
int Search_Position(linked_list_t* ll, int val)
{
	int position = 0;
	node_t* node_temp = ll->last_node;// đặt con trỏ ở last node
	while (node_temp  != 0)
	{
		if (node_temp->value == val)
		{
			return position;
		}
		
		node_temp = node_temp->previous_node;
		position++;
	}
	return -1;

}

//----------------------------------------------------------------------------------------------------------------------------
//8. GetValue: lấy giá trị của node ở vị trí cuối cùng
//- Input :
//	*linked_list_t * : địa chỉ của linked list cái mà chúng ta sẽ đi đọc node trong đó.
//	- Ouput : int : giá trị của node
int GetVal_LastNode(linked_list_t* ll)
{
	node_t* nope_temp = ll->last_node;
	return nope_temp->value;
}




//----------------------------------------------------------------------------------------------------------------------------
//9. GetValueIndex: lấy giá trị của node ở vị trí index
//- Input :
//	*linked_list_t * : địa của của linked list cái mà chúng ta sẽ đi đọc giá trị của node ở vị trí index
//	* int index : vị trí của node chúng ta muốn đọc
//	- Ouput : int : giá trị của node mà chúng ta đọc được

int GetValueIndex(linked_list_t* ll, int index)
{
	node_t* node_temp = ll->last_node;
	for (int i = ll->len - 1; i > index; i--)
	{
		node_temp = node_temp->previous_node;
	}
	return node_temp->value;
}

//----------------------------------------------------------------------------------------------------------------------------
//10. DeleteAll: xoá tất cả node trong linked lisst
//- Input : linked_list_t * : địa chỉ của linked list cái mà chúng ta muốn xoá hết tất cả node của nos
//- Output : void
void Delect_ll(linked_list_t* ll)
{
	
	node_t* node_temp = ll->last_node;
	while (node_temp != 0)
	{

		node_t* node_del = node_temp ; // Gán note cần xóa vào node trước node tạm
		node_temp = node_temp->previous_node;//gán lại giá trị node_previous của note tạm chính là node previous của note cần xóa
		free(node_del);
		ll->len--;
	}
	ll->last_node = 0;
	ll->len = 0;

}



int main()
{
	linked_list_t ll = { 0 };

	AddNodeToLinkList(&ll, 1);
	AddNodeToLinkList(&ll, 2);
	AddNodeToLinkList(&ll, 7);
	AddNodeToLinkList(&ll, 4);
	AddNodeToLinkList(&ll, 8);
	/*remove_last(&ll);
	int a = GetValueIndex(&ll, 1);*/
	//int position = Search_Position(&ll, 1);
	//int gt = GetVal_LastNode(&ll);
	//Delect_ll(&ll);
	remove_index(&ll, 1);
	int a = GetValueIndex(&ll, 2);
}
