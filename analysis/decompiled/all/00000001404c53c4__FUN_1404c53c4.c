// Function: FUN_1404c53c4
// Addr: 1404c53c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c53c4(longlong param_1,byte *param_2)

{
  char cVar1;
  byte bVar2;
  int in_EAX;
  char cVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  longlong unaff_RBX;
  byte *pbStack_8;
  
  uVar5 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar4 = (undefined2)((ulonglong)param_2 >> 0x10);
  pbStack_8 = (byte *)(ulonglong)(in_EAX + 0x3600470U);
  bVar2 = (byte)(in_EAX + 0x3600470U);
  *param_2 = *param_2 ^ bVar2;
  *(int *)param_2 = *(int *)param_2 + (int)param_2;
  *pbStack_8 = *pbStack_8 | bVar2;
  cVar1 = (byte)param_2 + *(byte *)((longlong)&pbStack_8 + param_1);
  cVar3 = (char)((ulonglong)param_2 >> 8) + *(char *)(unaff_RBX + param_1) +
          CARRY1((byte)param_2,*(byte *)((longlong)&pbStack_8 + param_1));
  *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar1))) =
       *(char *)CONCAT44(uVar5,CONCAT22(uVar4,CONCAT11(cVar3,cVar1))) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

