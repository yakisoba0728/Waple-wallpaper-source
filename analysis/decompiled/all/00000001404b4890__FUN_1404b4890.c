// Function: FUN_1404b4890
// Addr: 1404b4890
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4890(char *param_1,char param_2)

{
  byte *in_RAX;
  uint *puVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  char cVar2;
  undefined6 unaff_0000001a;
  char in_CF;
  ushort in_CR0;
  
  cVar2 = (unaff_BH - in_RAX[0xe]) - in_CF;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar2,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(cVar2,unaff_BL)) + param_2;
  puVar1 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX & *in_RAX);
  *puVar1 = (uint)in_CR0;
  *(char *)puVar1 = (char)*puVar1 + (char)param_1;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

