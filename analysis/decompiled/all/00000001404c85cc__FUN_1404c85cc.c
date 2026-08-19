// Function: FUN_1404c85cc
// Addr: 1404c85cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c85cc(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  byte *in_RAX;
  char *pcVar5;
  char cVar7;
  uint uVar8;
  longlong in_FS_OFFSET;
  char cVar6;
  
  cVar7 = (char)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar2 = (uint)in_RAX + 0x11000974;
  piVar1 = (int *)(in_FS_OFFSET + (ulonglong)uVar2);
  *piVar1 = *piVar1 + uVar2 + (uint)(0xeefff68b < (uint)in_RAX);
  uVar8 = (uint)param_2 | *(uint *)((ulonglong)uVar2 + param_2);
  cVar4 = (char)uVar2 + '4';
  LocalDescriptorTableRegister((short)CONCAT31((int3)(uVar2 >> 8),cVar4));
  uVar3 = (undefined2)(uVar2 >> 0x10);
  cVar6 = (char)(uVar2 >> 8) + cVar7;
  pcVar5 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar6,cVar4));
  *pcVar5 = *pcVar5 + cVar4;
  cVar4 = cVar4 + (char)uVar8;
  pcVar5 = (char *)(ulonglong)CONCAT22(uVar3,CONCAT11(cVar6 + cVar7,cVar4));
  *(char *)(ulonglong)uVar8 = *(char *)(ulonglong)uVar8 + (char)param_1;
  *pcVar5 = *pcVar5 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

