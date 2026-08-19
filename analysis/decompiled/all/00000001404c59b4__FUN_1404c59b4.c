// Function: FUN_1404c59b4
// Addr: 1404c59b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c59b4(undefined8 param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int *in_RAX;
  byte bVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  longlong unaff_RBX;
  char *pcVar3;
  
  uVar6 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar5 = (undefined2)((ulonglong)param_1 >> 0x10);
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *param_2 = *param_2 + (int)param_1;
  uVar2 = (int)in_RAX + *in_RAX;
  pcVar3 = (char *)(ulonglong)uVar2;
  bVar4 = (byte)((ulonglong)param_1 >> 8) | pcVar3[2];
  cVar1 = (char)uVar2;
  *(char *)param_2 = (char)*param_2 + cVar1;
  *pcVar3 = *pcVar3 + cVar1;
  *(char *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(bVar4,(char)param_1))) =
       *(char *)CONCAT44(uVar6,CONCAT22(uVar5,CONCAT11(bVar4,(char)param_1))) +
       cVar1 + pcVar3[unaff_RBX];
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

