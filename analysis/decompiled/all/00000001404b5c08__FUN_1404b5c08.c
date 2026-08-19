// Function: FUN_1404b5c08
// Addr: 1404b5c08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5c08(char *param_1,byte *param_2,byte param_3,char *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 in_RAX;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RDI;
  char in_CF;
  byte *pbVar4;
  
  bVar3 = (char)in_RAX + '[' + in_CF;
  pbVar4 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
  *param_4 = *param_4 + unaff_SPL;
  *param_2 = *param_2 | bVar3;
  *pbVar4 = *pbVar4 + (char)param_1;
  if (-1 < (char)*pbVar4) {
    *(char *)(unaff_RDI + 0x7e001ae4) = *(char *)(unaff_RDI + 0x7e001ae4) + (char)param_2;
    out((short)param_2,(int)pbVar4);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x4b);
    *pcVar1 = *pcVar1 - unaff_BL;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (undefined1 *)
           (CONCAT62(unaff_0000001a,(ushort)unaff_BL) +
           CONCAT62(unaff_0000001a,(ushort)unaff_BL) * 2);
  *puVar2 = *puVar2;
  *param_4 = *param_4 + unaff_SPL;
  *pbVar4 = *pbVar4 | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

