// Function: FUN_1404ba918
// Addr: 1404ba918
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404ba919) overlaps instruction at (ram,0x0001404ba918)
    */

void FUN_1404ba918(char *param_1,byte *param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  uint uVar3;
  int *in_RAX;
  undefined1 *puVar5;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  byte *pbVar4;
  
  uVar3 = (int)in_RAX - *in_RAX;
  pbVar4 = (byte *)(ulonglong)uVar3;
  if ((POPCOUNT(uVar3 & 0xff) & 1U) != 0) {
    *param_1 = *param_1 + (char)(uVar3 >> 8);
    *param_2 = *param_2 | (byte)uVar3;
    *pbVar4 = *pbVar4 + (char)param_1;
    uVar2 = in(0x2b);
    pbVar4 = (byte *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),uVar2);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0xd);
    *pcVar1 = *pcVar1 + unaff_BH;
  }
  *pbVar4 = *pbVar4 & (byte)pbVar4;
  out(0xf4,(int)pbVar4);
  *pbVar4 = *pbVar4 & (byte)pbVar4;
  pbVar4[0x2021004b] = pbVar4[0x2021004b] & (byte)((ulonglong)param_1 >> 8);
  puVar5 = (undefined1 *)
           ((ulonglong)
            CONCAT61((int6)((ulonglong)pbVar4 >> 0x10),
                     (byte)((ulonglong)pbVar4 >> 8) & (byte)((ulonglong)param_2 >> 8)) * 0x100);
  puVar5[unaff_RBP] = puVar5[unaff_RBP] | (byte)param_2;
  out(0xf4,(int)puVar5);
  *puVar5 = 0;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

