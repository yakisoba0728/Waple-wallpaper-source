// Function: FUN_1404bd90c
// Addr: 1404bd90c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bd90c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  longlong in_RAX;
  undefined1 *puVar2;
  undefined1 unaff_BL;
  byte unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RBP;
  
  *(byte *)(in_RAX + 9) = *(byte *)(in_RAX + 9) | unaff_BH;
  pcVar1 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  puVar2 = (undefined1 *)(ulonglong)((uint)in_RAX & 0x25471600);
  puVar2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8] =
       puVar2[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 8];
  *param_4 = *param_4 + unaff_SPL;
  *puVar2 = *puVar2;
  puVar2[0x16002546] = puVar2[0x16002546] + (char)((ulonglong)param_2 >> 8);
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

