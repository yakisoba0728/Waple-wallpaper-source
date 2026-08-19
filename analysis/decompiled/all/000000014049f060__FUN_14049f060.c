// Function: FUN_14049f060
// Addr: 14049f060
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049f060(undefined8 param_1,char *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  char unaff_SPL;
  int *unaff_RSI;
  int iVar3;
  
  out((short)param_2,in_EAX);
  *param_4 = *param_4 + unaff_SPL;
  cVar2 = (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x4d);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  out((short)param_2,in_EAX);
  *param_3 = *param_3 + cVar2;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + cVar2;
  cRam0000000000000000 = cRam0000000000000000 + cVar2;
  cVar2 = cVar2 + '\x01';
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *param_2 = *param_2 + cVar2;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
  *unaff_RSI = *unaff_RSI + iVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

