// Function: FUN_1404bb120
// Addr: 1404bb120
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb120(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint *in_RAX;
  char *pcVar2;
  char cVar3;
  
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar1 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)((longlong)in_RAX + 0x21004b) = *(char *)((longlong)in_RAX + 0x21004b) - cVar3;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX & uVar1;
  *(char *)((longlong)in_RAX + 0x21004b) = *(char *)((longlong)in_RAX + 0x21004b) - cVar3;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  bRam000000016583b167 = bRam000000016583b167 ^ (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX & uVar1;
  uVar1 = (int)&stack0x00000000 + 0x21004b;
  uVar1 = CONCAT22((short)(uVar1 >> 0x10),
                   CONCAT11((char)(uVar1 >> 8) * '\x02' + (char)param_2,
                            (byte)uVar1 | *(byte *)(ulonglong)uVar1));
  uVar1 = uVar1 | *(uint *)(ulonglong)uVar1;
  pcVar2 = (char *)(ulonglong)uVar1;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + cVar3;
  *(char *)(param_1 * 2) = *(char *)(param_1 * 2) + (char)(uVar1 >> 8);
  pcVar2[param_1] = pcVar2[param_1] + cVar3;
  *pcVar2 = *pcVar2 + cVar3;
  uVar1 = uVar1 & 0x25380021;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 & uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

