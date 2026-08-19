// Function: FUN_1404d686c
// Addr: 1404d686c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d686c(undefined8 param_1,undefined8 param_2)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *unaff_RDI;
  bool bVar1;
  
  uRam0000000021004d64 = CONCAT31(uRam0000000021004d64._1_3_,(char)uRam0000000021004d64 + 'd');
  bVar1 = 0xb2 < bRam000000009f00847b;
  bRam000000009f00847b = bRam000000009f00847b + 0x4d;
  *unaff_RDI = (*unaff_RDI - (char)((ulonglong)param_2 >> 8)) - bVar1;
  cRam0000000022009ac8 = cRam0000000022009ac8 + unaff_BH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

