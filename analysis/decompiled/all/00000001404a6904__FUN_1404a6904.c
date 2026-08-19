// Function: FUN_1404a6904
// Addr: 1404a6904
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6904(int param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  uint *in_RAX;
  longlong unaff_RBX;
  bool bVar4;
  
  bRam10000994c5000994 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bRam10000994c5000994;
  bVar4 = CARRY1((byte)*in_RAX,bRam10000994c5000994);
  *(byte *)in_RAX = (byte)*in_RAX + bRam10000994c5000994;
  *(char *)(unaff_RBX + -0x6ce5fff7) = *(char *)(unaff_RBX + -0x6ce5fff7) + (char)param_2 + bVar4;
  *in_RAX = *in_RAX | (uint)in_RAX;
  uVar2 = in(param_2);
  *(char *)(longlong)param_1 = *(char *)(longlong)param_1 + -0x10;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar2) * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
  uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                        CONCAT11(((char)((ulonglong)in_RAX >> 8) + (char)((ushort)param_2 >> 8)) *
                                 '\x02',uVar2)) + 0x6d40000;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

