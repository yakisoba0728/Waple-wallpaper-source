// Function: FUN_1404cdbb8
// Addr: 1404cdbb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdbb8(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  undefined3 uVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  uint *unaff_RBX;
  uint unaff_ESP;
  byte *pbVar6;
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined2)((ulonglong)param_2 >> 0x10);
  uVar7 = (undefined1)((ulonglong)param_2 >> 8);
  cVar2 = (char)param_2 * '\x02';
  pcVar1 = (char *)(CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar2))) + 0x4c +
                   (longlong)unaff_RBX * 8);
  *pcVar1 = *pcVar1 + (char)((in_EAX ^ 0x35d2ae00) >> 8);
  *param_1 = *param_1 + (char)in_EAX;
  uVar5 = in_EAX ^ 0x35d2ae00 | *(uint *)CONCAT44(uVar9,CONCAT22(uVar8,CONCAT11(uVar7,cVar2)));
  *(char *)unaff_RBX = (char)*unaff_RBX + (char)param_1;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = (char)uVar5 + 0x50;
  pbVar6 = (byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  *unaff_RBX = *unaff_RBX & CONCAT22(uVar8,CONCAT11(uVar7,cVar2));
  *pbVar6 = *pbVar6 | bVar4;
  pcVar1 = (char *)((ulonglong)(CONCAT31(uVar3,bVar4 | *pbVar6) | unaff_ESP | 0xf640400) - 0x24);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

