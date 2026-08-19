// Function: FUN_1404d15cc
// Addr: 1404d15cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d15cc(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  undefined8 in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RSI;
  char in_CF;
  byte *pbVar3;
  
  bVar2 = cRama8003b42ea003b42 + 'M' + in_CF;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  *param_1 = *param_1 + bVar2;
  if (-1 < *param_1) {
    pbVar3[-0xc] = pbVar3[-0xc] + unaff_BH;
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 100);
    *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar3 = *pbVar3 | bVar2;
  *unaff_RSI = *unaff_RSI + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

