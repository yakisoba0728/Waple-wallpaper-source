// Function: FUN_14049eae4
// Addr: 14049eae4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eae4(char *param_1,undefined8 param_2)

{
  byte bVar1;
  int in_EAX;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int *unaff_RBX;
  int unaff_ESI;
  undefined4 unaff_00000034;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_2 >> 0x10);
  cVar2 = (char)param_2;
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(ulonglong)(in_EAX + 0x3600470U);
  *unaff_RBX = *unaff_RBX + unaff_ESI;
  bVar1 = (byte)(in_EAX + 0x3600470U >> 8) | 0x33;
  *param_1 = *param_1 + bVar1;
  *param_1 = *param_1 + bVar1;
  *(int *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) =
       *(int *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar2))) +
       CONCAT22(uVar4,CONCAT11(cVar3,cVar2));
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

