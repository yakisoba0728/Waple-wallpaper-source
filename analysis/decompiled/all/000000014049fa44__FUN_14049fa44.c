// Function: FUN_14049fa44
// Addr: 14049fa44
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fa44(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  int iVar3;
  
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  cVar2 = in(0xcd);
  iVar3 = CONCAT31((int3)((uint)in_EAX >> 8),cVar2);
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x34);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *(int *)CONCAT44(in_register_00000004,iVar3) =
       *(int *)CONCAT44(in_register_00000004,iVar3) + iVar3;
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 + cVar2;
  *(char *)CONCAT44(in_register_00000004,iVar3) =
       *(char *)CONCAT44(in_register_00000004,iVar3) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

