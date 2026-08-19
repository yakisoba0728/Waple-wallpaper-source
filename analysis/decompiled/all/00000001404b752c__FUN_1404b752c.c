// Function: FUN_1404b752c
// Addr: 1404b752c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b752c(char *param_1,byte param_2,undefined8 param_3,byte *param_4)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  int unaff_ESI;
  byte in_CF;
  byte *pbVar5;
  
  uVar4 = (in_EAX + -0x4b744000) - (uint)in_CF;
  pbVar5 = (byte *)(ulonglong)uVar4;
  *param_1 = *param_1 + (char)(uVar4 >> 8);
  *pbVar5 = *pbVar5 + (char)uVar4;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + param_2;
  uVar4 = (uVar4 + 0xe2a0ba00) - (uint)CARRY1(bVar2,param_2);
  bVar3 = (byte)uVar4;
  *(char *)((ulonglong)uVar4 + 0x74) = *(char *)((ulonglong)uVar4 + 0x74) + bVar3;
  bVar2 = *param_4;
  *param_4 = *param_4 + bVar3;
  piVar1 = (int *)((ulonglong)(uVar4 + 0x32150004 + (uint)CARRY1(bVar2,bVar3)) + 0x10);
  *piVar1 = *piVar1 + unaff_ESI +
            (uint)(0xcdeafffb < uVar4 || CARRY4(uVar4 + 0x32150004,(uint)CARRY1(bVar2,bVar3)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

