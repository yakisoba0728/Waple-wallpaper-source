// Function: FUN_1404d7d94
// Addr: 1404d7d94
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7d94(byte *param_1,undefined2 param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  byte bVar6;
  char *in_RAX;
  char unaff_BL;
  undefined7 unaff_00000019;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  char in_SF;
  char in_OF;
  char unaff_retaddr;
  
  uVar3 = in(param_2);
  *unaff_RDI = uVar3;
  if (in_OF == in_SF) {
    bVar2 = *param_1;
    bVar6 = (byte)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + bVar6;
    uVar5 = ((int)in_RAX - *unaff_RSI) - (uint)CARRY1(bVar2,bVar6);
    *(char *)CONCAT71(unaff_00000019,unaff_BL) =
         *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL;
    if (*(char *)CONCAT71(unaff_00000019,unaff_BL) != '\0') {
      unaff_RDI[1] = unaff_RDI[1] + (char)param_1;
      puVar1 = (uint *)(in_FS_OFFSET + (ulonglong)uVar5);
      *puVar1 = *puVar1 | uVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + unaff_R12B;
  cVar4 = (char)in_RAX;
  *(char *)unaff_RSI = (char)*unaff_RSI + cVar4;
  *in_RAX = *in_RAX + cVar4;
  if (*in_RAX != '\0') {
    *in_RAX = *in_RAX + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX + unaff_retaddr;
  in_RAX[0x3c] = in_RAX[0x3c] + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

