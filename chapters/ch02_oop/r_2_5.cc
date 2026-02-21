// Describe a component from a text-editor GUI (other than an “edit” menu)
// and the member functions that it encapsulates.
//
// Answer:
//
// A suitable example is a **toolbar component** in a text editor GUI.
//
// The toolbar is a visual container that provides quick access to frequently
// used actions via buttons and icons (e.g., save, open, undo, redo, formatting
// options). It encapsulates both presentation logic (layout and rendering of
// buttons) and interaction logic (event handling).
//
// Typical member functions it encapsulates include:
//
// - AddButton(action, icon)`– registers a new button associated with a command
// - RemoveButton(action) – removes an existing button
// - EnableButton(action) / DisableButton(action) – updates button state
//   based on application context
// - OnClick(action) – event handler triggered when a button is pressed
// - SetVisible(bool) – shows or hides the toolbar.
// - UpdateState(editorState) – synchronizes button states with the editor
//   (e.g., disabling “Undo” when no undo history exists).
//
// Internally, it may also maintain a mapping between UI controls and command
// objects, delegating actual editing operations to the document or controller
// layer.

int main() {
  // dummy main
  return 0;
}
