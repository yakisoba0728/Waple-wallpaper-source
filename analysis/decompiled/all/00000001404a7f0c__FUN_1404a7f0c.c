// Function: FUN_1404a7f0c
// Addr: 1404a7f0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7f0c(char *param_1,char *param_2)

{
  char in_AL;
  undefined1 uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char in_SF;
  char in_OF;
  
  cVar4 = (char)param_2;
  if (in_OF != in_SF) {
    *param_1 = *param_1 + in_AL;
    *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = in(10);
  *(char *)((ulonglong)uVar2 + 0x210049e1) = *(char *)((ulonglong)uVar2 + 0x210049e1) + (char)uVar2;
  uVar1 = in(1);
  uVar2 = CONCAT31((int3)(uVar2 >> 8),uVar1);
  param_2[-0x3c] = param_2[-0x3c] + (char)param_1;
  if (uVar2 + *(int *)(ulonglong)uVar2 != 0) {
    *param_2 = *param_2 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001454a86cd = cRam00000001454a86cd + (char)param_1;
  param_1[-0x3ffff51b] = param_1[-0x3ffff51b] + cVar4;
  uVar2 = in(10);
  pcVar3 = (char *)(ulonglong)uVar2;
  pcVar3[0x7e] = pcVar3[0x7e] + unaff_BH;
  *param_1 = *param_1 + -0x10;
  *param_2 = *param_2 + (char)uVar2;
  *pcVar3 = *pcVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

