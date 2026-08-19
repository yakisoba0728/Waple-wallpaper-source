// Function: FUN_1404ca0b0
// Addr: 1404ca0b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca04b) overlaps instruction at (ram,0x0001404ca04a)
    */

void FUN_1404ca0b0(char *param_1,undefined8 param_2,char param_3)

{
  byte *pbVar1;
  char *pcVar2;
  uint *puVar3;
  byte in_AL;
  byte bVar4;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  byte bVar5;
  char unaff_SPL;
  undefined7 unaff_00000021;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool in_OF;
  
  bVar5 = (byte)((ulonglong)param_2 >> 8);
  if (in_OF) {
    *param_1 = *param_1 + param_3;
    pcVar2 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + CONCAT44(unaff_00000034,unaff_ESI));
    *pcVar2 = *pcVar2 + (char)param_2;
  }
  else {
    bVar4 = in_AL ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
    if ((POPCOUNT(bVar4) & 1U) != 0) {
      bVar4 = bVar4 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4));
      *param_1 = *param_1 + unaff_SPL;
      *(byte *)CONCAT62(in_register_00000002,CONCAT11(10,bVar4)) =
           *(char *)CONCAT62(in_register_00000002,CONCAT11(10,bVar4)) + bVar4;
      pcVar2 = (char *)(CONCAT62(in_register_00000002,CONCAT11(10,bVar4)) + -0x6c);
      *pcVar2 = *pcVar2 + bVar5;
      bVar4 = bVar4 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(10,bVar4));
      if ((POPCOUNT(bVar4) & 1U) == 0) {
        pbVar1 = (byte *)(CONCAT62(in_register_00000002,CONCAT11(10,bVar4)) + 7);
        *pbVar1 = *pbVar1 | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar4 = bVar4 ^ *(byte *)CONCAT62(in_register_00000002,CONCAT11(10,bVar4));
      *param_1 = *param_1 + bVar4;
      bVar5 = *unaff_RDI;
      *unaff_RDI = *unaff_RDI + (byte)param_1;
      if (CARRY1(bVar5,(byte)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      LOCK();
      puVar3 = (uint *)(CONCAT62(in_register_00000002,CONCAT11(10,bVar4)) + 8);
      *puVar3 = *puVar3 | unaff_ESI;
      UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

