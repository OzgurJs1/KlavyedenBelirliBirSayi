#include <stdio.h>
#include <stdlib.h>

// Aðaç düðümünün yapýsý
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Yeni düðüm oluþturma fonksiyonu
struct node* newNode(int value) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = value;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

// Aðaç elemaný ekleme fonksiyonu
struct node* insert(struct node* root, int value) {
    if (root == NULL) {
        return newNode(value);
    }
    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }
    return root;
}

// Aðacý yazdýrma fonksiyonu (Inorder traversal)
void printInorder(struct node* root) {
    if (root != NULL) {
        printInorder(root->left);
        printf("%d ", root->data);
        printInorder(root->right);
    }
}

// Main fonksiyonu
int main() {
    struct node* root = NULL;
    int value;
    printf("Bir sayi girin (cikmak icin -1 girin): ");
    scanf("%d", &value);
    while (value != -1) {
        root = insert(root, value);
        printf("Bir sayi girin (cikmak icin -1 girin): ");
        scanf("%d", &value);
    }
    printf("Agac elemanlari: ");
    printInorder(root);
    return 0;
}

