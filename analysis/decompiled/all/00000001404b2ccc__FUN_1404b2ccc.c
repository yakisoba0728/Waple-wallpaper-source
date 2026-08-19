// Function: FUN_1404b2ccc
// Addr: 1404b2ccc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b2cec) overlaps instruction at (ram,0x0001404b2cea)
    */

void FUN_1404b2ccc(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  char cVar3;
  undefined8 in_RAX;
  undefined8 uVar4;
  char cVar5;
  uint unaff_EBP;
  byte in_CF;
  
  cVar5 = (char)param_2;
  uVar4 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRam8c00179dcd00179d);
  pcVar1 = (char *)(param_2 + 0xc);
  cVar3 = *pcVar1;
  *pcVar1 = *pcVar1 + cVar5;
  if (!SCARRY1(cVar3,cVar5)) {
    puVar2 = (uint *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),
                               CONCAT11((byte)((ulonglong)param_2 >> 8) |
                                        *(byte *)(ulonglong)
                                                 (((int)uVar4 + -0x1001004a) - (uint)in_CF),cVar5))
                     + param_1);
    *puVar2 = *puVar2 & unaff_EBP;
    cRam000000014d4b39c9 = cRam000000014d4b39c9 + cVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

