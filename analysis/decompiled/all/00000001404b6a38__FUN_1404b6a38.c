// Function: FUN_1404b6a38
// Addr: 1404b6a38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b6a38(byte *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  uint *in_RAX;
  char cVar3;
  undefined7 uVar4;
  byte unaff_BL;
  uint unaff_ESI;
  
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  cVar3 = (char)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  param_1[-0x6691ffe5] = param_1[-0x6691ffe5] ^ unaff_BL;
  uVar1 = *in_RAX;
  *param_1 = *param_1 >> 1;
  *param_1 = *param_1 + ((char)in_RAX - (char)uVar1);
  *param_2 = *param_2 + cVar3;
  cVar2 = in(0x11);
  *param_2 = *param_2 + cVar3;
  if (*param_2 != '\0') {
    *param_2 = *param_2 + cVar3;
    *(uint *)CONCAT71(uVar4,0xb) = *(uint *)CONCAT71(uVar4,0xb) & unaff_ESI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cRam00000001b04b79cd = cRam00000001b04b79cd + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

