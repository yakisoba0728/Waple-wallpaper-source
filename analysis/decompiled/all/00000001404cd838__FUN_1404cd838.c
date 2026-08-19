// Function: FUN_1404cd838
// Addr: 1404cd838
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cd838(byte *param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  char *in_RAX;
  longlong lVar6;
  byte *unaff_RDI;
  
  cVar3 = *in_RAX;
  bVar4 = (byte)in_RAX;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar4;
  lVar6 = CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                   CONCAT11((char)((ulonglong)in_RAX >> 8) + cVar3,bVar4)) >> 8),
                   bVar4 + 10 + CARRY1(bVar2,bVar4));
  pbVar1 = param_1 + lVar6;
  bVar2 = *pbVar1;
  bVar4 = (byte)param_2;
  *pbVar1 = *pbVar1 + bVar4;
  uVar5 = ((int)lVar6 + -0xbf00d00) - (uint)CARRY1(bVar2,bVar4);
  if (param_1 == (byte *)0x1 || uVar5 == 0) {
    *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  }
  uRam00000001a461d85e =
       uRam00000001a461d85e &
       CONCAT22((short)((uint)param_2 >> 0x10),
                CONCAT11((char)((uint)param_2 >> 8) + *(char *)(ulonglong)uVar5,bVar4));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

