// Function: FUN_1400feac0
// Addr: 1400feac0
// Size: 301 bytes


uint FUN_1400feac0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  longlong *local_res20;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong *local_48;
  undefined1 local_40 [8];
  longlong local_38 [3];
  ulonglong local_20;
  
  puVar7 = auStack_68;
  local_48 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  lVar2 = (*DAT_140426738)(L"mfreadwrite.dll");
  if (lVar2 == 0) {
    return 0;
  }
  pcVar3 = (code *)(*DAT_140426730)(lVar2,"MFCreateSourceReaderFromURL");
  if (pcVar3 == (code *)0x0) {
LAB_1400fec02:
    uVar1 = 0x80004005;
    *(undefined8 *)(puVar7 + -8) = 0x1400fec10;
    (*DAT_140426728)(lVar2);
  }
  else {
    puVar4 = (undefined8 *)FUN_140005950(local_38,param_1 + 0x100);
    if (7 < (ulonglong)puVar4[3]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    uVar1 = (*pcVar3)(puVar4,0,&local_48);
    if (7 < local_20) {
      uVar6 = local_20 * 2 + 2;
      lVar5 = local_38[0];
      if (0xfff < uVar6) {
        lVar5 = *(longlong *)(local_38[0] + -8);
        if (0x1f < (local_38[0] - lVar5) - 8U) {
          pcVar3 = (code *)swi(0x29);
          (*pcVar3)(5);
          puVar7 = auStack_60;
          goto LAB_1400fec02;
        }
        uVar6 = local_20 * 2 + 0x29;
      }
      func_0x00014028b040(lVar5,uVar6);
    }
    (*DAT_140426728)(lVar2);
    puVar7 = auStack_68;
    if (-1 < (int)uVar1) {
      uVar1 = (**(code **)(*local_48 + 0x30))(local_48,0xfffffffc,&local_res20);
      puVar7 = auStack_68;
      if (-1 < (int)uVar1) {
        uVar1 = (**(code **)(*local_res20 + 0x40))(local_res20,&UNK_14042c3b0,local_40);
        puVar7 = auStack_68;
        if (-1 < (int)uVar1) {
          *param_2 = local_40._4_4_;
          *param_3 = local_40._0_4_;
          puVar7 = auStack_68;
        }
      }
    }
  }
  if (*(longlong **)(puVar7 + 0x88) != (longlong *)0x0) {
    pcVar3 = *(code **)(**(longlong **)(puVar7 + 0x88) + 0x10);
    *(undefined8 *)(puVar7 + -8) = 0x1400fec23;
    (*pcVar3)();
    *(undefined8 *)(puVar7 + 0x88) = 0;
  }
  if (*(longlong **)(puVar7 + 0x20) != (longlong *)0x0) {
    pcVar3 = *(code **)(**(longlong **)(puVar7 + 0x20) + 0x10);
    *(undefined8 *)(puVar7 + -8) = 0x1400fec3f;
    (*pcVar3)();
  }
  return uVar1 >> 0x1f ^ 1;
}

