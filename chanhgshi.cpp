#include<iostream>
using namespace std;
template<class HeadType,class ElementType>
class SimpleChainList
{
public:
    SimpleChainList();
    ~SimpleChainList();
    int LengthSimpleChainList() const;
    SimpleHeadNode<HeadType>* GetHeadPtrSimpleChainList(){return HeadPtr;};
    void PutValueSimpleHeadNode(HeadTypeHeadValue){HeadPtr->Hdata=haedValue;};
    SimpleChainNode<ElementType>* GetFirstPtrSimpleChainList(){return HeadPtr->first;};
    bool GetElementSimpleChainList(int k,ElementType &result);
    bool GetElementSimpleChainList(SimpleChainNode<ElementType>* current,ElementType &result);
    SimpleChainNode<ElementType>* SearchElementSimpleChainList(int searchkey);
    SimpleChainNode<ElementType>* SearchElementSimpleChainLIst(char *searchkey);
    bool InsertElementSimpleChainList(int k,ElementType &newvalue);
    bool InsertElementFrontSimpleChainList(ElementType &newvalue,SimpleChainNode<ElementType> * InsertPtr);
    bool DeleteElementSimpleChainList(int k);
    bool DeleteElementSimpleChainList(SimpleChainNode<ElementType> * DeletePtr);
    void DestroyElementsSimpleChainList();
    bool MoveElementFirstSimple3ChainList(int k);
    void InvertSimpleChainList();
    void InvertDisplaySimpleChaiinList(SimpleChainNode<ElementType> * p);
    void DisplaySimpleChainList(SimpleChainList<HeadType,ElementType> &AppList);
    void DisplayElementChainList(ElementType result);

private:
    SimpleHeadNode<HeadType> * HeadPtr;    
};

template<class HeadType,class ElementType>
SimpleChainList<HeadType,ElementType>::
SimpleChainList()
{
    HeadPtr=new SimpleHeadNode<HeadType>;
    HeadPtr->first=NULL;
}

template<class HeadType,class ElementType>
SimpleChainList<HeadType,ElementType>::
~SimpleChainList()
{
    SimpleChainNode<ElementType>* current;
    current=HeadPtr->first;
    while (HeadPtr->first)
    {
        current=current->link;
        delete HeadPtr->first;
        HeadPtr->first=current;
    }
    delete HeadPtr;
}

template<class HeadType,class ElementType>
int SimpleChainList<HeadType,ElementType>::LengthSimpleChainList()const
{
    SimpleChainNode<ElementType>*current=HeadPtr->first;
    int len=0;
    while(current)
    {
        len++;
        current=current->link;
    }
    return len;
}

template<class HeadType,class ElementType>
bool SimpleChainList<HeadType,ElementType>::GetElementSimpleChainList(int k,ElementType &result)
{
    if(k<1)return false;
    SimpleChainNode<ElementType>* current=HeadPtr->first;
    int index=1;
    while(index<k&&current)
    {
        current=current->link;
        index++;
    }
    if(current)
    {
        result=current->data;
        return true;
    }
    return false;
}

template<class HeadType,class ElementType>
SimpleChainNode<ElementType>* SimpleChainList<HeadType,ElementType>::
SearchElementChainList(int searchkey)
{
    SimpleChainNode<ElementType>* current=HeadPtr->first;
    while(current && current->data.key!=searchkey)
        current=current->link;
    if(current)
        return current;
    else
        return NULL; 
}
