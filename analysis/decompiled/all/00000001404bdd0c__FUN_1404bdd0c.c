// Function: FUN_1404bdd0c
// Addr: 1404bdd0c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdd0c(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  char acStack_8 [8];
  
  in_RAX[10] = in_RAX[10] + unaff_BH + in_CF;
  *in_RAX = *in_RAX + (char)param_1;
  acStack_8[0] = '\v';
  acStack_8[1] = '\0';
  acStack_8[2] = -7;
  acStack_8[3] = 'u';
  acStack_8[4] = '\0';
  acStack_8[5] = '\0';
  acStack_8[6] = '\0';
  acStack_8[7] = '\0';
  uVar1 = (uint)in_RAX & 0x25761700;
  acStack_8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8] =
       acStack_8[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8] + (char)(uVar1 >> 8);
  *param_4 = *param_4 + (char)acStack_8;
  *param_2 = *param_2 | uVar1;
  *param_1 = *param_1 + (char)param_1;
  uVar1 = (uint)(short)uVar1;
  *(uint *)(ulonglong)uVar1 = *(uint *)(ulonglong)uVar1 | uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

