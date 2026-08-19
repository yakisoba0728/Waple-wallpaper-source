// Function: FUN_1404c6da4
// Addr: 1404c6da4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c6da4(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  byte bVar5;
  undefined7 uVar6;
  byte bVar7;
  char *pcVar4;
  
  bVar7 = (byte)((ulonglong)param_2 >> 8);
  uVar6 = (undefined7)((ulonglong)param_1 >> 8);
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bVar5 = (byte)param_1 & bVar7;
  *(char *)(param_2 + -0x6fffd10f) = *(char *)(param_2 + -0x6fffd10f) + (char)in_RAX;
  uVar1 = in(0x4a);
  *(char *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + (char)((ulonglong)in_RAX >> 8);
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1) + 0x64050002;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
  *(char *)(param_2 + -0x6fffd10e) = *(char *)(param_2 + -0x6fffd10e) + bVar7;
  cVar2 = in(0x4a);
  pcVar4 = (char *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),cVar2);
  *(char *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + (char)(uVar3 >> 8);
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0xe] = pcVar4[-0xe] + (char)param_2;
  *(char *)(param_2 + -0x6fffd10e) = *(char *)(param_2 + -0x6fffd10e) + bVar7;
  cVar2 = in(0x4a);
  *(char *)CONCAT71(uVar6,bVar5) = *(char *)CONCAT71(uVar6,bVar5) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

