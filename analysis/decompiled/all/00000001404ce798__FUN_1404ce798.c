// Function: FUN_1404ce798
// Addr: 1404ce798
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce798(char param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  uint in_EAX;
  undefined3 uVar6;
  undefined4 in_register_00000004;
  char *unaff_RBX;
  int unaff_ESP;
  char *unaff_RSI;
  
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = *(byte *)CONCAT44(in_register_00000004,in_EAX);
  bVar4 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar4;
  uVar6 = (undefined3)(in_EAX >> 8);
  cVar5 = bVar4 + param_2 + CARRY1(bVar2,bVar4);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,CONCAT31(uVar6,cVar5)) + 0x190049e1);
  *pcVar1 = *pcVar1 + cVar5;
  uVar3 = CONCAT31(uVar6,cVar5);
  *unaff_RSI = *unaff_RSI + param_2;
  *(int *)(CONCAT44(in_register_00000004,uVar3) & 0xffffffffffffff07) =
       *(int *)(CONCAT44(in_register_00000004,uVar3) & 0xffffffffffffff07) + unaff_ESP;
  *unaff_RBX = *unaff_RBX + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

