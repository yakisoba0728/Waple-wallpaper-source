// Function: FUN_1404c9d70
// Addr: 1404c9d70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9d70(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte *in_RAX;
  byte *pbVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  
  cVar6 = (char)((ulonglong)param_2 >> 8);
  cVar5 = (char)param_2;
  cVar4 = (char)((ulonglong)param_1 >> 8);
  in_RAX[0x32] = in_RAX[0x32] + cVar4;
  *(char *)(unaff_RBX + 0x68) = *(char *)(unaff_RBX + 0x68) + cVar6;
  bVar2 = *in_RAX;
  (&stack0x00002100)[param_1 * 2] = (&stack0x00002100)[param_1 * 2];
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ bVar2) + 0x32);
  *pcVar1 = *pcVar1 + cVar4;
  *(char *)(unaff_RBX + 0x68) = *(char *)(unaff_RBX + 0x68) + cVar6;
  (&stack0x062e2100)[param_1 * 2] = (&stack0x062e2100)[param_1 * 2];
  pbVar3 = (byte *)func_0x0001406d9df3();
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + (byte)pbVar3;
  *(char *)(unaff_RBP + 0x32) = *(char *)(unaff_RBP + 0x32) + cVar5 + CARRY1(bVar2,(byte)pbVar3);
  cRam00000000e44cd00a = cRam00000000e44cd00a + (char)((ulonglong)pbVar3 >> 8);
  func_0x000165659e03();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

