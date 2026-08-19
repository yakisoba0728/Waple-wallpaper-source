// Function: FUN_1404c3e00
// Addr: 1404c3e00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3e00(char *param_1,byte param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  undefined7 uVar5;
  char in_CF;
  char *pcVar4;
  
  cVar1 = (char)in_RAX - *param_1;
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = cVar1 - in_CF;
  pcVar4 = (char *)CONCAT71(uVar5,bVar2);
  bRam05c007e009f00b00 = bVar2;
  if (SBORROW1((char)in_RAX,*param_1) == SBORROW1(cVar1,in_CF)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pcVar4 = *pcVar4 + bVar2;
  pcVar4 = (char *)CONCAT71(uVar5,bVar2 & param_2);
  *pcVar4 = *pcVar4 + (bVar2 & param_2);
  uVar3 = (int)pcVar4 + 0x17010000;
  *(byte *)(ulonglong)uVar3 = *(byte *)(ulonglong)uVar3 | (byte)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

