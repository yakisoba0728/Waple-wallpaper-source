// Function: FUN_1404a0698
// Addr: 1404a0698
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0698(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *in_RAX;
  uint *puVar3;
  longlong unaff_RBX;
  undefined2 in_ES;
  
  uRam00000001406b06e8 = in_ES;
  *in_RAX = *in_RAX | (byte)in_RAX;
  puVar3 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8)) * '\x02' + (char)param_2,
                                     (byte)in_RAX));
  uVar2 = *puVar3;
  *(char *)(param_2 + param_1) = *(char *)(param_2 + param_1) + (char)param_2;
  pbVar1 = (byte *)(unaff_RBX + (ulonglong)((uint)puVar3 | uVar2));
  *pbVar1 = *pbVar1 >> 5 | *pbVar1 << 3;
  uRam00000001504b0708 = in_ES;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

