// Function: FUN_1404a9194
// Addr: 1404a9194
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9194(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *in_RAX;
  uint *puVar4;
  char *pcVar5;
  
  *in_RAX = *in_RAX & (uint)param_1;
  bVar1 = (char)in_RAX + (char)*in_RAX;
  puVar4 = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar1,bVar1));
  uVar3 = (uint)puVar4;
  uVar3 = uVar3 + 0xcf000c67 + (uint)(uVar3 < *puVar4);
  pcVar5 = (char *)(ulonglong)uVar3;
  *param_1 = *param_1 + -8;
  cVar2 = (char)uVar3;
  *pcVar5 = *pcVar5 + cVar2;
  cRam000000010f4a9e18 = cRam000000010f4a9e18 + (char)param_2;
  *param_1 = *param_1 + -0x10;
  *param_2 = *param_2 + cVar2;
  *pcVar5 = *pcVar5 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

