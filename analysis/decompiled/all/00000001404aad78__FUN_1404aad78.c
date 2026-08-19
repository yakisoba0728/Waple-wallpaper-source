// Function: FUN_1404aad78
// Addr: 1404aad78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404aae39) overlaps instruction at (ram,0x0001404aae38)
    */

void FUN_1404aad78(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  undefined4 in_register_00000004;
  char *pcVar3;
  char cVar4;
  char cVar5;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar6;
  undefined1 auStack_4a01 [9];
  undefined8 uStack_49f8;
  undefined8 uStack_49f0;
  undefined1 auStack_49e8 [18912];
  
  cVar5 = (char)((ulonglong)param_2 >> 8);
  cVar4 = (char)param_2;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) & in_EAX;
  bVar2 = (byte)in_EAX;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  pcVar3 = (char *)(param_1 + -1);
  if (pcVar3 == (char *)0x0 || *(char *)CONCAT44(in_register_00000004,in_EAX) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar6 = SCARRY1(cRam00000001904ab475,bVar2);
  cRam00000001904ab475 = cRam00000001904ab475 + bVar2;
  if (bVar6 != cRam00000001904ab475 < '\0') {
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x7d);
    *pcVar1 = *pcVar1 + (char)((ulonglong)pcVar3 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (cRam00000001904ab475 != '\0') {
    pcVar3 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x7d);
    *pcVar3 = *pcVar3 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (!bVar6) {
    *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
         *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar5;
    *param_4 = *param_4 + (bVar2 ^ 0xc);
    uStack_49f0 = param_2;
    uStack_49f8 = param_2;
    auStack_4a01._1_8_ = &uStack_49f8;
    *(int *)(pcVar3 + (longlong)(auStack_4a01 + 1)) =
         *(int *)(pcVar3 + (longlong)(auStack_4a01 + 1)) + unaff_ESI;
    *pcVar3 = *pcVar3 + cVar4;
    bVar2 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI << 1 | (char)bVar2 < '\0';
    if ((char)bVar2 < '\0' != (char)*unaff_RDI < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) = *(char *)CONCAT44(unaff_00000034,unaff_ESI) + cVar5;
  *param_4 = *param_4 + (char)auStack_49e8;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  pcVar3 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x7d);
  *pcVar3 = *pcVar3 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

