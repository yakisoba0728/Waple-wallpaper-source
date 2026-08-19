// Function: FUN_1404ae00c
// Addr: 1404ae00c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ae00c(undefined8 param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char *in_RAX;
  undefined7 uVar6;
  uint *puVar5;
  int unaff_EBX;
  int unaff_ESP;
  int unaff_EBP;
  int *unaff_RSI;
  char in_CF;
  bool bVar7;
  char in_SF;
  char in_OF;
  byte *pbVar4;
  
  if (in_OF == in_SF) {
    *unaff_RSI = *unaff_RSI + unaff_ESP;
    *(byte *)unaff_RSI =
         (char)*unaff_RSI +
         ((byte)((ulonglong)in_RAX >> 8) | (byte)((uint)*(undefined4 *)in_RAX >> 8));
    *unaff_RSI = *unaff_RSI + unaff_EBP;
    *param_2 = *param_2 + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar6 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar2 = (char)in_RAX + *in_RAX + in_CF;
  pbVar4 = (byte *)CONCAT71(uVar6,bVar2);
  out((short)param_2,bVar2);
  bVar7 = CARRY1(*pbVar4,bVar2);
  bVar1 = *pbVar4;
  bRam0021004adf080012 = bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  if (!SCARRY1(bVar1,bVar2)) {
    bVar1 = bVar2 + *pbVar4;
    cVar3 = bVar1 + bVar7;
    if ((SCARRY1(bVar2,*pbVar4) != SCARRY1(bVar1,bVar7)) != cVar3 < '\0') {
      puVar5 = (uint *)CONCAT71(uVar6,cVar3 + *(char *)CONCAT71(uVar6,cVar3) +
                                      (CARRY1(bVar2,*pbVar4) || CARRY1(bVar1,bVar7)));
      *unaff_RSI = *unaff_RSI + unaff_EBX;
      *puVar5 = *puVar5 | (uint)puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

