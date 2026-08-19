// Function: FUN_1404bbf20
// Addr: 1404bbf20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbf20(longlong param_1)

{
  char *pcVar1;
  uint *puVar2;
  byte *pbVar3;
  byte bVar4;
  longlong in_RAX;
  byte unaff_BL;
  uint unaff_ESP;
  undefined4 unaff_00000024;
  longlong unaff_RSI;
  
  puVar2 = (uint *)(CONCAT44(unaff_00000024,unaff_ESP) + 0x1ed4a400 + param_1);
  *puVar2 = *puVar2 & unaff_ESP;
  pbVar3 = (byte *)(CONCAT44(unaff_00000024,unaff_ESP) + -0xbdfffe1 + in_RAX * 8);
  bVar4 = *pbVar3;
  *pbVar3 = *pbVar3 + unaff_BL;
  pcVar1 = (char *)(CONCAT44(unaff_00000024,unaff_ESP) + unaff_RSI);
  *pcVar1 = *pcVar1 + (((byte)in_RAX - CARRY1(bVar4,unaff_BL)) -
                      ((byte)in_RAX < CARRY1(bVar4,unaff_BL)));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

