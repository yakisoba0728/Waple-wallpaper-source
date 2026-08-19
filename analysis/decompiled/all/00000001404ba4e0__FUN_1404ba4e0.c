// Function: FUN_1404ba4e0
// Addr: 1404ba4e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba4e0(undefined8 param_1,char param_2,char *param_3)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  byte bVar3;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  undefined6 unaff_0000001a;
  longlong in_FS_OFFSET;
  
  param_2 = in_AH + param_2;
  cVar2 = in_AL + *param_3;
  if (cVar2 != '\0') {
    bVar3 = cVar2 + *(char *)CONCAT62(in_register_00000002,CONCAT11(param_2,cVar2)) +
            param_3[in_FS_OFFSET];
    param_2 = param_2 + *(char *)(CONCAT62(in_register_00000002,CONCAT11(param_2,bVar3)) ^ 0x4c);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(0x20,unaff_BL)) + -0x49);
    *pcVar1 = *pcVar1 + unaff_BL;
    *(byte *)(CONCAT62(in_register_00000002,CONCAT11(param_2,bVar3)) ^ 0x4c) =
         *(byte *)(CONCAT62(in_register_00000002,CONCAT11(param_2,bVar3)) ^ 0x4c) & (bVar3 ^ 0x4c);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

