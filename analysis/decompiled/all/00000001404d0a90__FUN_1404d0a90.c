// Function: FUN_1404d0a90
// Addr: 1404d0a90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0a90(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  longlong in_RAX;
  byte bVar4;
  undefined7 uVar5;
  char unaff_BL;
  char cVar6;
  char unaff_BH;
  undefined6 unaff_0000001a;
  int unaff_ESI;
  uint uVar7;
  longlong unaff_RDI;
  byte in_CF;
  
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  *(uint *)(param_1 + in_RAX) = *(int *)(param_1 + in_RAX) + unaff_ESI + (uint)in_CF;
  bVar4 = (byte)param_2 | *(byte *)(unaff_RDI + in_RAX);
  uVar2 = (int)in_RAX + 0xd0000634;
  cVar6 = unaff_BL + unaff_BH;
  uVar7 = (uint)unaff_RDI & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) &
          *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar6));
  pcVar1 = (char *)((ulonglong)uVar7 + 0x4a + CONCAT71(uVar5,bVar4) * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  cVar3 = (char)(uVar2 >> 8);
  *param_1 = *param_1 + cVar3;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  pcVar1 = (char *)((ulonglong)
                    (uVar7 & *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar6)) &
                    *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,cVar6 + unaff_BH))) + 0x4a +
                   CONCAT71(uVar5,bVar4) * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

