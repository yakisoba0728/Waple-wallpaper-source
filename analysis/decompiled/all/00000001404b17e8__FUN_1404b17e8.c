// Function: FUN_1404b17e8
// Addr: 1404b17e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b17e8(undefined8 param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char *unaff_RSI;
  longlong in_FS_OFFSET;
  int iVar4;
  
  *param_4 = *param_4 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  bVar3 = in(10);
  iVar4 = CONCAT31((int3)((uint)in_EAX >> 8),bVar3);
  bVar2 = *(byte *)CONCAT44(in_register_00000004,iVar4);
  *(byte *)CONCAT44(in_register_00000004,iVar4) =
       *(char *)CONCAT44(in_register_00000004,iVar4) + bVar3;
  piVar1 = (int *)(in_FS_OFFSET + CONCAT44(in_register_00000004,iVar4));
  *piVar1 = *piVar1 + iVar4 + (uint)CARRY1(bVar2,bVar3);
  param_2[CONCAT44(in_register_00000004,iVar4)] =
       param_2[CONCAT44(in_register_00000004,iVar4)] + (byte)param_2;
  *param_2 = *param_2 ^ (byte)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

