/* Goxel 3D voxels editor
 *
 * copyright (c) 2018 Guillaume Chereau <guillaume@noctua-software.com>
 *
 * Goxel is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.

 * Goxel is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.

 * You should have received a copy of the GNU General Public License along with
 * goxel.  If not, see <http://www.gnu.org/licenses/>.
 */

/* This file is autogenerated by tools/create_assets.py */

{.path = "data/scripts/test.js", .size = 773, .data =
    "\n"
    "import * as std from 'std'\n"
    "\n"
    "goxel.registerFormat({\n"
    "  name: 'Test',\n"
    "  ext: 'test\\0*.test\\0',\n"
    "  export: function(img, path) {\n"
    "    try {\n"
    "      console.log(`Save ${path}`)\n"
    "      let out = std.open(path, 'w')\n"
    "      let volume = img.getLayersVolume()\n"
    "      volume.iter(function(p, c) {\n"
    "        console.log(`${p.x} ${p.y}, ${p.z} => ${c.r}, ${c.g}, ${c.b}`)\n"
    "      })\n"
    "      out.close()\n"
    "      console.log('done')\n"
    "    } catch(e) {\n"
    "      console.log('error', e)\n"
    "    }\n"
    "  },\n"
    "})\n"
    "\n"
    "goxel.registerScript({\n"
    "  name: 'Test',\n"
    "  onExecute: function() {\n"
    "    console.log('test')\n"
    "    let box = goxel.selection\n"
    "    if (!box) {\n"
    "        console.log('Need a selection')\n"
    "        return\n"
    "    }\n"
    "    let mesh = goxel.image.layer.mesh\n"
    "    if (!mesh) return\n"
    "    box.iterVoxels(function(pos) {\n"
    "    })\n"
    "  }\n"
    "})\n"
    ""
},



